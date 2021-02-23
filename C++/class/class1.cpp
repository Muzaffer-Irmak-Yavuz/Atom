#include <iostream>

class Ornek
{
private:
  int veri;
public:
  void veriyeAta(int d)
  {
    veri = d;
  }
  void veriyiYaz()
  {
    std::cout << veri << '\n';
  }

};


int main() {

  Ornek o1,o2;

  o1.veriyeAta(100);
  o2.veriyeAta(200);
  o1.veriyiYaz();
  o2.veriyiYaz();



  return 0;
}
