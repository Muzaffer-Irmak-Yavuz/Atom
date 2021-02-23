#include <iostream>

class Car
{
private:
  std::string name;
  std::string model;
  int price;
public:
  Car(std::string n ,std::string m ,int p) :name(n), model(m), price(p)
  { };

  ~Car()
  {
    std::cout << "Object deleted " <<  std::endl;
  }

  void printAttributes()
  {
    std::cout << name << std::endl;
    std::cout << model << std::endl;
    std::cout << price << std::endl;
  }

  const std::string getName()
  {
    return name;
  }

  const std::string getModel()
  {
    return model;
  }

  const int getPrice()
  {
    return price;
  }

  void setName(const std::string name)
  {
    this -> name = name;
  }

  void setModel(const std::string model)
  {
    this -> model = model;
  }

  void setPrice(const int price)
  {
    this -> price = price;
  }

};





int main(void)
{

  Car car("BMW" , "A3" , 1000);
  std::cout << car.getName() << '\n';
  std::cout << car.getModel() << '\n';
  std::cout << car.getPrice() << '\n';

  car.setPrice(100000);
  std::cout << car.getPrice() << '\n';

  return EXIT_SUCCESS;
}
