  #include <stdio.h>


  void init_main(int argc, char const *argv[])
  __attribute__((constructor)) __attribute__((no_instrument_function));
  void desc(void *self)
  __attribute__((destructor));

  int a = 5;
  int *deneme __attribute__((section(".dynamic"))) = &a;





  int main(int argc, char const *argv[]) {

    static int guard = 0;
    if(guard == 0)
    {
      printf("%s\n",argv[0]);
      printf("%s\n",argv[1]);
      guard++;
    }

    return 0;
  }


  void init_main(int argc, char const *argv[])
  {


    printf("Before main\n" );
    main(2 , argv);

  }





  void desc(void *self)
  {
    printf("Bitti\n");
  }
