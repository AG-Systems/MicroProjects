// gcc -gsplit-dwarf split.c -o split.elf
void split(char *str)
{
  int len = strlen(str);
  int len1 = len/2;
  int len2 = len - len1; 
  char *s1 = malloc(len1+1);
  memcpy(s1, str, len1);
  s1[len1] = '\0';
  char *s2 = malloc(len2+1); 
  memcpy(s2, str+len1, len2);
  s2[len2] = '\0';
  free(s1);
  free(s2);
}

int main() 
{
}
