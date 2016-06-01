bool isIsomorphic(char* s, char* t) {
    char mapST[128] = { 0 };
    char mapTS[128] = { 0 };
    size_t len = strlen(s);
    for (int i = 0; i < len; ++i)
    {
        if (mapST[s[i]] == 0 && mapTS[t[i]] == 0)
        {
            mapST[s[i]] = t[i];
            mapTS[t[i]] = s[i];
        }
        else
        {
            if (mapST[s[i]] != t[i] || mapTS[t[i]] != s[i])
                return false;
        }
    }
    return true;    
}
