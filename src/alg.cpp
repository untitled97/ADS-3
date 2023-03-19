// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0, right = size, middle = (left + right) / 2, num = 0;
    while (left != right - 1) {
        middle = (left + right) / 2;
        if (*(arr + middle) < value)
            left = middle++;
        else if (*(arr + middle) > value)
            right = middle;
        else {
            num = 1;
            for (int mid_left = middle - 1; *(arr + mid_left) <= *(arr); mid_left--) {
                if (value == *(arr + mid_left))
                    num++;
                if (*(arr + mid_left) == *(arr))
                    break;
            }
            for (int mid_right = middle + 1; *(arr + mid_right) >= *(arr + size); mid_right++) {
                if (value == *(arr + mid_right))
                    num++;
                if (*(arr + mid_right) == *(arr + size))
                    break;
            }
            return num;
        }
    }
    return 0;
}
