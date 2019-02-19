


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==19614== Memcheck, a memory error detector
==19614== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19614== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19614== Command: ./test -r xml "sumDigits"
==19614== 
==19614== 
==19614== HEAP SUMMARY:
==19614==     in use at exit: 0 bytes in 0 blocks
==19614==   total heap usage: 1,714 allocs, 1,714 frees, 219,888 bytes allocated
==19614== 
==19614== All heap blocks were freed -- no leaks are possible
==19614== 
==19614== For counts of detected and suppressed errors, rerun with: -v
==19614== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==19624== Memcheck, a memory error detector
==19624== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19624== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19624== Command: ./test -r xml "triangle"
==19624== 
==19624== 
==19624== HEAP SUMMARY:
==19624==     in use at exit: 0 bytes in 0 blocks
==19624==   total heap usage: 1,700 allocs, 1,700 frees, 219,440 bytes allocated
==19624== 
==19624== All heap blocks were freed -- no leaks are possible
==19624== 
==19624== For counts of detected and suppressed errors, rerun with: -v
==19624== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==19630== Memcheck, a memory error detector
==19630== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19630== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19630== Command: ./test -r xml "sum"
==19630== 
==19630== 
==19630== HEAP SUMMARY:
==19630==     in use at exit: 0 bytes in 0 blocks
==19630==   total heap usage: 1,771 allocs, 1,771 frees, 303,392 bytes allocated
==19630== 
==19630== All heap blocks were freed -- no leaks are possible
==19630== 
==19630== For counts of detected and suppressed errors, rerun with: -v
==19630== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Sum is correct" filename="tests/basic.cpp" line="53">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="56">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="69">
        <OverallResults successes="0" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="74">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Did not make any additional stack objects" filename="tests/basic.cpp" line="77">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==19634== Memcheck, a memory error detector
==19634== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19634== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19634== Command: ./test -r xml "isBalanced"
==19634== 
==19634== 
==19634== HEAP SUMMARY:
==19634==     in use at exit: 0 bytes in 0 blocks
==19634==   total heap usage: 1,763 allocs, 1,763 frees, 315,264 bytes allocated
==19634== 
==19634== All heap blocks were freed -- no leaks are possible
==19634== 
==19634== For counts of detected and suppressed errors, rerun with: -v
==19634== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="82">
      <Section name="balanced" filename="tests/basic.cpp" line="85">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="101">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="117">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="14" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="14" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==19640== Memcheck, a memory error detector
==19640== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19640== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19640== Command: ./test -r xml "scramble\ 17"
==19640== 
==19640== 
==19640== HEAP SUMMARY:
==19640==     in use at exit: 0 bytes in 0 blocks
==19640==   total heap usage: 1,712 allocs, 1,712 frees, 232,360 bytes allocated
==19640== 
==19640== All heap blocks were freed -- no leaks are possible
==19640== 
==19640== For counts of detected and suppressed errors, rerun with: -v
==19640== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==19646== Memcheck, a memory error detector
==19646== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19646== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19646== Command: ./test -r xml "scramble\ 9"
==19646== 
==19646== 
==19646== HEAP SUMMARY:
==19646==     in use at exit: 0 bytes in 0 blocks
==19646==   total heap usage: 1,707 allocs, 1,707 frees, 231,688 bytes allocated
==19646== 
==19646== All heap blocks were freed -- no leaks are possible
==19646== 
==19646== For counts of detected and suppressed errors, rerun with: -v
==19646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="158">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [0/0] - verifySame (EXTRA CREDIT)

- **Points**: 0 / 0

```
==19649== Memcheck, a memory error detector
==19649== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19649== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19649== Command: ./test -r xml "verifySame\ (EXTRA\ CREDIT)"
==19649== 
==19649== 
==19649== HEAP SUMMARY:
==19649==     in use at exit: 0 bytes in 0 blocks
==19649==   total heap usage: 1,900 allocs, 1,900 frees, 258,976 bytes allocated
==19649== 
==19649== All heap blocks were freed -- no leaks are possible
==19649== 
==19649== For counts of detected and suppressed errors, rerun with: -v
==19649== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="verifySame (EXTRA CREDIT)" tags="[extraCredit=1][valgrind][weight=0]" filename="tests/basic.cpp" line="186">
      <Section name="Result for different stack and queue is different" filename="tests/basic.cpp" line="187">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Result for same stack and queue is same" filename="tests/basic.cpp" line="224">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **yutaroi2** using **6be19e3ae5049cf226b748dd47edd69ed20f85d2** (from **February 18th 2019, 12:15:00 am**)
