// https://en.wikipedia.org/wiki/Stack_overflow
int foo(){
     return foo();
}
int main(){
  foo();
}

