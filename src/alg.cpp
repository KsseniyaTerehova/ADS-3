// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int s = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == value)
      s += 1;
  }
  if (s > 0)
    return s;
  else
    return 0;
}
