char* convert(char* s, int numRows) {
    int len = strlen(s);
    char* res = NULL;
    res = (char *) malloc(len + 1);
    if (numRows <= 1 || strlen(s) < numRows)
    {
        strcpy(res, s);
        return res;
    }
    else if (len <= 0) 
    { 
        res[0] = '\0';
        return res;
    }
    else if (res != NULL)
    {
        int i,j = 0, count = 0;
        for (i = 0; i < numRows; i++)
        {
            for (j = i; j < len;j += 2 * numRows - 2)
            {
                res[count++] = s[j];
                if (i > 0 && i < numRows - 1 && (j + 2 * (numRows - i - 1)) < len)
                    res[count++] = s[j + 2 * (numRows - i - 1)];
            }
        }
        res[count] = '\0';
        return res;
    }
}