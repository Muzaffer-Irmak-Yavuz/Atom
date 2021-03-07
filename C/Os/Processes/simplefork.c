#include <unistd.h>
#include <stdio.h>
#include <sys/resource.h>
struct deneme
{

    int a :2;
    int b :2;
    int c :2;
    int d :2;

}__attribute__((packed));


int main(void)
{
  pid_t pid = fork();
  if (pid > 0)
    printf("%s , %d\n","Main" , getrusage());
  else if (pid == 0)
    printf("%s\n","Child");


  return 0;
}
