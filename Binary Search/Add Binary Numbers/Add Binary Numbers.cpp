string calc(char &a, char &b, char &c) {
    string s;
    if (a == '0' and b == '0')
        s = "00";
    else if ((a == '1' and b == '0') or (a == '0' and b == '1'))
        s = "01";
    else
        s = "10";
    if (c == '1') {
        if (s == "00")
            s = "01";
        else if (s == "01")
            s = "10";
        else
            s = "11";
    }
    return s;
}
string solve(string a, string b) {
    string big, small;
    if (a.length() > b.length())
        big = a, small = b;
    else
        big = b, small = a;
    int n = big.length(), m = small.length();
    reverse(big.begin(), big.end());
    reverse(small.begin(), small.end());
    for (int i = 0; i < n - m; i++) small += '0';
    char carry = '0';
    string ans = "";
    string add;
    for (int i = 0; i < n; i++) {
        add = calc(small[i], big[i], carry);
        carry = add[0];
        ans += add[1];
    }
    if (carry == '1') ans += '1';
    reverse(ans.begin(), ans.end());
    return ans;
}