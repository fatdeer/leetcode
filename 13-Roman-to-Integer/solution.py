int romanToInt(char* s) {
    int result = 0;
    int i;
    int last = 1000;
    for(i = 0;i < strlen(s); i++)
    {
        switch (s[i])
        {
            case 'M':
                result = (last >= 1000 ? result + 1000: result + 1000 - (last << 1));
                last = 1000;        
            break;
            case 'D':
                result = (last >= 500 ? result + 500: result + 500 - (last << 1));
                last = 500;
            break;
            case 'C':
                result = (last >= 100 ? result + 100: result + 100 - (last << 1));
                last = 100;
            break;
            case 'L':
                result = (last >= 50 ? result + 50: result + 50 - (last << 1));
                last = 50;
            break;
            case 'X':
                result = (last >= 10 ? result + 10:result + 10 - (last << 1));
                last = 10;
            break;
            case 'V':
                result = (last >= 5 ? result + 5: result + 5 - (last << 1));
                last = 5;
            break;
            case 'I':
                result = (last >= 1 ? result + 1:result + 1 - (last << 1));
                last = 1;
            break;
        }

    }
    return result;
}