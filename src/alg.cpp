// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0, right = size, middle = (left + right) / 2, num = 0;
    while (*(arr + middle) >= *(arr + left) || *(arr + middle) <= *(arr + right)) {
        middle = (left + right) / 2;
        if (*(arr + middle) > value) {
            middle--;
        } else if (*(arr + middle) < value) {
            middle++;
        } else {
            num++;
            int mid_left = middle - 1, mid_right = middle + 1;
            while (mid_left >= 0) {
                if (*(arr + mid_left) == value)
                    num++;
                mid_left--;
            }
            while (mid_right < size) {
                if (*(arr + mid_right) == value)
                    num++;
                mid_right++;
            }
            return num;
        }
    }
    return 0;
}
