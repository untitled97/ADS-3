// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0, right = size - 1, middle, num = 0;
    while (left <= right) {
        middle = (left + right) / 2;
        if (*(arr + middle) > value) {
            right = middle - 1;
        } else if (*(arr + middle) < value) {
            left = middle + 1;
        } else {
            num++;
            int bord_mid = middle - 1;
            while ((*(arr + bord_mid) == value) && (bord_mid >= 0)) {
                num++;
                bord_mid--;
            }
            bord_mid = middle + 1;
            while ((*(arr + bord_mid) == value) && (bord_mid < size)) {
                num++;
                bord_mid++;
            }
            return num;
        }
    }
    return num;
}
