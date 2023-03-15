// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int q = 0;
  for (int i = 0; i < size; ++i) {
    if (arr[i] == value) 
      q += 1;
  }
  if (q > 0)
    return q;
  else
    return 0;
}   
