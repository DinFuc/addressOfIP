string bintodec(string n)
{
    int m = n.size(), res = 0;
    for(int i = 0; i < m; i++)
        res += (n[i] - '0') * pow(2, m - i - 1);
    return to_string(res);
}
string dectobin(long long n)
{
    string s = "";
    while(n > 0){
        s += char(n % 2 + '0');
        n /= 2;
    }
    reverse(s.begin(), s.end());
    while(s.size() < 32) s = '0' + s;
    return s;
}
std::vector<string> addressOfIP(std::vector<long long> arr)
{
    vector<string>v;
    for(long long i : arr){
        string s = dectobin(i), x = "";
        x += bintodec(s.substr(0, 8)) + '.' + bintodec(s.substr(8, 8)) + '.'+
         bintodec(s.substr(16, 8)) + '.' + bintodec(s.substr(24, 8)) ;
        v.push_back(x); 
    }
    return v;
}
