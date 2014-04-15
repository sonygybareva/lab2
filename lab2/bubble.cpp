void bubble(char *items, int count)///сортировка пузырьком
{
  register int a, b;
  register char t;

  for(a=1; a < count; ++a)
    for(b=count-1; b >= a; --b) {
      if(items[b-1] > items[b]) {
        t = items[b-1];
        items[b-1] = items[b];
        items[b] = t;
      }
    }
}

