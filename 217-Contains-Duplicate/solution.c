typedef struct hashlist {
     int val;
     struct hashlist *next;
}list;

bool containsDuplicate(int* nums, int numsSize) {
    int i;
    int mask = numsSize - 1;
    list *tmp[numsSize];
    memset(tmp, 0, sizeof(list*) * numsSize);
    if (numsSize == 0 || numsSize == 1) {
        return false;
    }
    for(i = 0; i < numsSize; i++) {
        int idx;
        list *p;
        list *node = malloc(sizeof(list));
        node->val = *nums;
        idx = abs(*nums) % mask;    
        p = tmp[idx];
        node->next = p;
        tmp[idx] = node;
        while (p) {
            if (p->val == node->val) {
                return true;
            }
            p = p->next;
        }
        nums++;
    }
    return false;
}