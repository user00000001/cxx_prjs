#include "include/Proxy.hpp"

int main(int argc, char *argv[]) {
  Subject *sub = new ConcreteSubject();
  Proxy *p = new Proxy(sub);
  p->Request();
  return 0;
}
