char* longestCommonPrefix(char** strs, int strsSize) {
    char * str = NULL;
    if (strsSize < 1)
    {
        return "";
    }
    str = strs[0];
    size_t len = strlen(str);
    for (int i = 1; i < strsSize; i++)
    {
        for (size_t j = 0; j < len; j++)
        {
            if (strs[i][j] == '\0' || str[j] != strs[i][j])
            {
                len = j;
                break;
            }
        }
    }

    if (len > 0)
    {
        str[len] = '\0';
        return str;
    }
    return "";
}
