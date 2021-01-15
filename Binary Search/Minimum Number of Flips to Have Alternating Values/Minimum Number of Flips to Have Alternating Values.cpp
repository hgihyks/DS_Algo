int solve(string s) {
    int n = s.length();
    s += s;
    int l = s.length();
    int i;
    for (i = 0; i < l; i += 2)
        if (s[i] == '1')
            s[i] = '0';
        else
            s[i] = '1';
    int preone[l + 1], prezero[l + 1];
    memset(preone, 0, sizeof(preone));
    memset(prezero, 0, sizeof(prezero));
    for (i = 1; i <= l; i++)
        if (s[i - 1] == '1')
            preone[i] = 1 + preone[i - 1];
        else
            preone[i] = preone[i - 1];
    for (i = 1; i <= l; i++)
        if (s[i - 1] == '0')
            prezero[i] = 1 + prezero[i - 1];
        else
            prezero[i] = prezero[i - 1];
    int ans = 1 << 30;
    for (i = n; i <= l; i++) {
        int ones = preone[i] - preone[i - n];
        int zeros = prezero[i] - prezero[i - n];
        ans = min(min(ones, zeros), ans);
    }
    return ans;
}