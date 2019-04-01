


## Score: 50/150 (33.33%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/6] - DH::testRemoveEASY

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <Failure filename="tests/tests-dh.cpp" line="22">
        Insert did not work
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testRemoveHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <Failure filename="tests/tests-dh.cpp" line="50">
        Insert did not work
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - DH::testResizeOnce

- **Points**: 0 / 7


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <Expression success="false" type="REQUIRE" filename="tests/tests-dh.cpp" line="73">
        <Original>
          hashTable.tableSize() >= val / 0.7
        </Original>
        <Expanded>
          17 >= 122.8571428571
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/11] - DH::testResizeAll

- **Points**: 0 / 11


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <Expression success="false" type="REQUIRE" filename="tests/tests-dh.cpp" line="97">
        <Original>
          hashTable.tableSize() >= strings.size() / 0.7
        </Original>
        <Expanded>
          17 >= 37.1428571429
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - DH::testInsertEasy

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <Failure filename="tests/tests-dh.cpp" line="119">
        Did not insert key: 'all'
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testInsertHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <Failure filename="tests/tests-dh.cpp" line="140">
        Did not insert properly key: 'has'
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==7335== Memcheck, a memory error detector
==7335== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7335== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7335== Command: ./test -r xml "SC::testRemoveEASY"
==7335== 
==7335== 
==7335== HEAP SUMMARY:
==7335==     in use at exit: 0 bytes in 0 blocks
==7335==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==7335== 
==7335== All heap blocks were freed -- no leaks are possible
==7335== 
==7335== For counts of detected and suppressed errors, rerun with: -v
==7335== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==7399== Memcheck, a memory error detector
==7399== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7399== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7399== Command: ./test -r xml "SC::testRemoveHard"
==7399== 
==7399== 
==7399== HEAP SUMMARY:
==7399==     in use at exit: 0 bytes in 0 blocks
==7399==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==7399== 
==7399== All heap blocks were freed -- no leaks are possible
==7399== 
==7399== For counts of detected and suppressed errors, rerun with: -v
==7399== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==7405== Memcheck, a memory error detector
==7405== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7405== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7405== Command: ./test -r xml "SC::testResizeOnce"
==7405== 
==7405== 
==7405== HEAP SUMMARY:
==7405==     in use at exit: 0 bytes in 0 blocks
==7405==   total heap usage: 2,015 allocs, 2,015 frees, 250,400 bytes allocated
==7405== 
==7405== All heap blocks were freed -- no leaks are possible
==7405== 
==7405== For counts of detected and suppressed errors, rerun with: -v
==7405== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true">
        <StdOut>
----find prime----
size: 17, prime: 37
----find prime----
size: 37, prime: 79
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==7408== Memcheck, a memory error detector
==7408== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7408== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7408== Command: ./test -r xml "SC::testResizeAll"
==7408== 
==7408== 
==7408== HEAP SUMMARY:
==7408==     in use at exit: 0 bytes in 0 blocks
==7408==   total heap usage: 1,914 allocs, 1,914 frees, 243,584 bytes allocated
==7408== 
==7408== All heap blocks were freed -- no leaks are possible
==7408== 
==7408== For counts of detected and suppressed errors, rerun with: -v
==7408== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true">
        <StdOut>
----find prime----
size: 17, prime: 37
----find prime----
size: 37, prime: 79
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==7413== Memcheck, a memory error detector
==7413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7413== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7413== Command: ./test -r xml "SC::testInsertEasy"
==7413== 
==7413== 
==7413== HEAP SUMMARY:
==7413==     in use at exit: 0 bytes in 0 blocks
==7413==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==7413== 
==7413== All heap blocks were freed -- no leaks are possible
==7413== 
==7413== For counts of detected and suppressed errors, rerun with: -v
==7413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==7508== Memcheck, a memory error detector
==7508== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7508== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7508== Command: ./test -r xml "SC::testInsertHard"
==7508== 
==7508== 
==7508== HEAP SUMMARY:
==7508==     in use at exit: 0 bytes in 0 blocks
==7508==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==7508== 
==7508== All heap blocks were freed -- no leaks are possible
==7508== 
==7508== For counts of detected and suppressed errors, rerun with: -v
==7508== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - LP::testRemoveEASY

- **Points**: 0 / 6

```
[Process timed out]
```
```
[Process timed out]
```


### ✗ - [0/10] - LP::testRemoveHard

- **Points**: 0 / 10

```
[Process timed out]
```
```
[Process timed out]
```


### ✗ - [0/7] - LP::testResizeOnce

- **Points**: 0 / 7

```
[Process timed out]
```
```
[Process timed out]
```


### ✗ - [0/11] - LP::testResizeAll

- **Points**: 0 / 11

```
[Process timed out]
```
```
[Process timed out]
```


### ✗ - [0/6] - LP::testInsertEasy

- **Points**: 0 / 6

```
[Process timed out]
```
```
[Process timed out]
```


### ✗ - [0/10] - LP::testInsertHard

- **Points**: 0 / 10

```
[Process timed out]
```
```
[Process timed out]
```


---

This report was generated for **yutaroi2** using **7428b84a66e1e4b5210fe46285d16a33d31d9e77** (from **April 1st 2019, 12:15:00 am**)
