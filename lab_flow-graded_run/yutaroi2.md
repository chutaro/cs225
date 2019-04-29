


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==5230== Memcheck, a memory error detector
==5230== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5230== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5230== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==5230== 
==5230== 
==5230== HEAP SUMMARY:
==5230==     in use at exit: 0 bytes in 0 blocks
==5230==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==5230== 
==5230== All heap blocks were freed -- no leaks are possible
==5230== 
==5230== For counts of detected and suppressed errors, rerun with: -v
==5230== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==5236== Memcheck, a memory error detector
==5236== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5236== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5236== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==5236== 
==5236== 
==5236== HEAP SUMMARY:
==5236==     in use at exit: 0 bytes in 0 blocks
==5236==   total heap usage: 2,019 allocs, 2,019 frees, 238,256 bytes allocated
==5236== 
==5236== All heap blocks were freed -- no leaks are possible
==5236== 
==5236== For counts of detected and suppressed errors, rerun with: -v
==5236== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==5241== Memcheck, a memory error detector
==5241== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5241== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5241== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==5241== 
==5241== 
==5241== HEAP SUMMARY:
==5241==     in use at exit: 0 bytes in 0 blocks
==5241==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==5241== 
==5241== All heap blocks were freed -- no leaks are possible
==5241== 
==5241== For counts of detected and suppressed errors, rerun with: -v
==5241== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==5246== Memcheck, a memory error detector
==5246== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5246== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5246== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==5246== 
==5246== 
==5246== HEAP SUMMARY:
==5246==     in use at exit: 0 bytes in 0 blocks
==5246==   total heap usage: 2,019 allocs, 2,019 frees, 238,064 bytes allocated
==5246== 
==5246== All heap blocks were freed -- no leaks are possible
==5246== 
==5246== For counts of detected and suppressed errors, rerun with: -v
==5246== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==5252== Memcheck, a memory error detector
==5252== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5252== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5252== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==5252== 
==5252== 
==5252== HEAP SUMMARY:
==5252==     in use at exit: 0 bytes in 0 blocks
==5252==   total heap usage: 2,085 allocs, 2,085 frees, 243,672 bytes allocated
==5252== 
==5252== All heap blocks were freed -- no leaks are possible
==5252== 
==5252== For counts of detected and suppressed errors, rerun with: -v
==5252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==5305== Memcheck, a memory error detector
==5305== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5305== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5305== Command: ./test -r xml "Testing\ simple\ backflow"
==5305== 
==5305== 
==5305== HEAP SUMMARY:
==5305==     in use at exit: 0 bytes in 0 blocks
==5305==   total heap usage: 2,065 allocs, 2,065 frees, 239,664 bytes allocated
==5305== 
==5305== All heap blocks were freed -- no leaks are possible
==5305== 
==5305== For counts of detected and suppressed errors, rerun with: -v
==5305== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==5333== Memcheck, a memory error detector
==5333== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5333== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5333== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==5333== 
==5333== 
==5333== HEAP SUMMARY:
==5333==     in use at exit: 0 bytes in 0 blocks
==5333==   total heap usage: 2,098 allocs, 2,098 frees, 244,752 bytes allocated
==5333== 
==5333== All heap blocks were freed -- no leaks are possible
==5333== 
==5333== For counts of detected and suppressed errors, rerun with: -v
==5333== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==5337== Memcheck, a memory error detector
==5337== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5337== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5337== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==5337== 
==5337== 
==5337== HEAP SUMMARY:
==5337==     in use at exit: 0 bytes in 0 blocks
==5337==   total heap usage: 2,112 allocs, 2,112 frees, 243,072 bytes allocated
==5337== 
==5337== All heap blocks were freed -- no leaks are possible
==5337== 
==5337== For counts of detected and suppressed errors, rerun with: -v
==5337== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==5364== Memcheck, a memory error detector
==5364== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5364== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5364== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==5364== 
==5364== 
==5364== HEAP SUMMARY:
==5364==     in use at exit: 0 bytes in 0 blocks
==5364==   total heap usage: 2,181 allocs, 2,181 frees, 252,240 bytes allocated
==5364== 
==5364== All heap blocks were freed -- no leaks are possible
==5364== 
==5364== For counts of detected and suppressed errors, rerun with: -v
==5364== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==5368== Memcheck, a memory error detector
==5368== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5368== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5368== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==5368== 
==5368== 
==5368== HEAP SUMMARY:
==5368==     in use at exit: 0 bytes in 0 blocks
==5368==   total heap usage: 2,184 allocs, 2,184 frees, 250,424 bytes allocated
==5368== 
==5368== All heap blocks were freed -- no leaks are possible
==5368== 
==5368== For counts of detected and suppressed errors, rerun with: -v
==5368== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **yutaroi2** using **535956455674f3d87b0bc33f199a4729b8c7d3c3** (from **April 29th 2019, 12:15:00 am**)
