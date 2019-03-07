


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
FloodFilledImage.cpp:62:24: fatal error: member function 'begin' not viable: 'this' argument has type 'const ImageTraversal', but function is not marked const
  for (const Point & p : travs_[0]) {
                       ^
./imageTraversal/ImageTraversal.h:55:20: note: 'begin' declared here
  virtual Iterator begin() = 0;
                   ^
FloodFilledImage.cpp:62:24: note: when looking up 'begin' function for range expression of type 'const ImageTraversal'
  for (const Point & p : travs_[0]) {
                       ^
1 error generated.
make: *** [.objs/FloodFilledImage.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c Point.cpp -o .objs/Point.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c FloodFilledImage.cpp -o .objs/FloodFilledImage.o

```


---

This report was generated for **yutaroi2** using **d7cdb27d8fc8401957faa710fbc888b056e3b74b** (from **March 7th 2019, 12:05:00 am**)
