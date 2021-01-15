#include "solution.hpp"
using namespace std;

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
class Solution {
    public:
    LLNode* solve(LLNode* node) {
        if (node == NULL) return node;
        LLNode *prev = NULL, *after = node->next;
        while (after != NULL) {
            node->next = prev;
            prev = node;
            node = after;
            after = node->next;
        }
        node->next = prev;
        return node;
    }
};

LLNode* solve(LLNode* node) {
    return (new Solution())->solve(node);
}