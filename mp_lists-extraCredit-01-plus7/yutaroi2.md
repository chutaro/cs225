


## Score: 52/57 (91.23%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==6780== Memcheck, a memory error detector
==6780== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6780== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6780== Command: ./test -r xml "List::insertFront\ size"
==6780== 
==6780== 
==6780== HEAP SUMMARY:
==6780==     in use at exit: 0 bytes in 0 blocks
==6780==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==6780== 
==6780== All heap blocks were freed -- no leaks are possible
==6780== 
==6780== For counts of detected and suppressed errors, rerun with: -v
==6780== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==6784== Memcheck, a memory error detector
==6784== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6784== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6784== Command: ./test -r xml "List::insertBack\ size"
==6784== 
==6784== 
==6784== HEAP SUMMARY:
==6784==     in use at exit: 0 bytes in 0 blocks
==6784==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==6784== 
==6784== All heap blocks were freed -- no leaks are possible
==6784== 
==6784== For counts of detected and suppressed errors, rerun with: -v
==6784== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==6791== Memcheck, a memory error detector
==6791== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6791== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6791== Command: ./test -r xml "List::insert\ contents"
==6791== 
==6791== 
==6791== HEAP SUMMARY:
==6791==     in use at exit: 0 bytes in 0 blocks
==6791==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==6791== 
==6791== All heap blocks were freed -- no leaks are possible
==6791== 
==6791== For counts of detected and suppressed errors, rerun with: -v
==6791== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==6803== Memcheck, a memory error detector
==6803== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6803== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6803== Command: ./test -r xml "List::split\ simple"
==6803== 
==6803== 
==6803== HEAP SUMMARY:
==6803==     in use at exit: 0 bytes in 0 blocks
==6803==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==6803== 
==6803== All heap blocks were freed -- no leaks are possible
==6803== 
==6803== For counts of detected and suppressed errors, rerun with: -v
==6803== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==6810== Memcheck, a memory error detector
==6810== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6810== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6810== Command: ./test -r xml "List::_destroy\ empty\ list"
==6810== 
==6810== 
==6810== HEAP SUMMARY:
==6810==     in use at exit: 0 bytes in 0 blocks
==6810==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==6810== 
==6810== All heap blocks were freed -- no leaks are possible
==6810== 
==6810== For counts of detected and suppressed errors, rerun with: -v
==6810== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==6816== Memcheck, a memory error detector
==6816== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6816== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6816== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==6816== 
==6816== 
==6816== HEAP SUMMARY:
==6816==     in use at exit: 0 bytes in 0 blocks
==6816==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==6816== 
==6816== All heap blocks were freed -- no leaks are possible
==6816== 
==6816== For counts of detected and suppressed errors, rerun with: -v
==6816== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==6823== Memcheck, a memory error detector
==6823== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6823== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6823== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==6823== 
==6823== 
==6823== HEAP SUMMARY:
==6823==     in use at exit: 0 bytes in 0 blocks
==6823==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==6823== 
==6823== All heap blocks were freed -- no leaks are possible
==6823== 
==6823== For counts of detected and suppressed errors, rerun with: -v
==6823== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==6836== Memcheck, a memory error detector
==6836== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6836== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6836== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==6836== 
==6836== 
==6836== HEAP SUMMARY:
==6836==     in use at exit: 0 bytes in 0 blocks
==6836==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==6836== 
==6836== All heap blocks were freed -- no leaks are possible
==6836== 
==6836== For counts of detected and suppressed errors, rerun with: -v
==6836== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==6845== Memcheck, a memory error detector
==6845== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6845== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6845== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6845== 
==6845== 
==6845== HEAP SUMMARY:
==6845==     in use at exit: 0 bytes in 0 blocks
==6845==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==6845== 
==6845== All heap blocks were freed -- no leaks are possible
==6845== 
==6845== For counts of detected and suppressed errors, rerun with: -v
==6845== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==6856== Memcheck, a memory error detector
==6856== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6856== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6856== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==6856== 
==6856== 
==6856== HEAP SUMMARY:
==6856==     in use at exit: 0 bytes in 0 blocks
==6856==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==6856== 
==6856== All heap blocks were freed -- no leaks are possible
==6856== 
==6856== For counts of detected and suppressed errors, rerun with: -v
==6856== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==6874== Memcheck, a memory error detector
==6874== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6874== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6874== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==6874== 
==6874== 
==6874== HEAP SUMMARY:
==6874==     in use at exit: 0 bytes in 0 blocks
==6874==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==6874== 
==6874== All heap blocks were freed -- no leaks are possible
==6874== 
==6874== For counts of detected and suppressed errors, rerun with: -v
==6874== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==6888== Memcheck, a memory error detector
==6888== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6888== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6888== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==6888== 
==6888== 
==6888== HEAP SUMMARY:
==6888==     in use at exit: 0 bytes in 0 blocks
==6888==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==6888== 
==6888== All heap blocks were freed -- no leaks are possible
==6888== 
==6888== For counts of detected and suppressed errors, rerun with: -v
==6888== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==6899== Memcheck, a memory error detector
==6899== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6899== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6899== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==6899== 
==6899== 
==6899== HEAP SUMMARY:
==6899==     in use at exit: 0 bytes in 0 blocks
==6899==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==6899== 
==6899== All heap blocks were freed -- no leaks are possible
==6899== 
==6899== For counts of detected and suppressed errors, rerun with: -v
==6899== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==6905== Memcheck, a memory error detector
==6905== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6905== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6905== Command: ./test -r xml "List::insert\ contents\ #2"
==6905== 
==6905== 
==6905== HEAP SUMMARY:
==6905==     in use at exit: 0 bytes in 0 blocks
==6905==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==6905== 
==6905== All heap blocks were freed -- no leaks are possible
==6905== 
==6905== For counts of detected and suppressed errors, rerun with: -v
==6905== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==6911== Memcheck, a memory error detector
==6911== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6911== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6911== Command: ./test -r xml "List::waterfall\ simple"
==6911== 
==6911== 
==6911== HEAP SUMMARY:
==6911==     in use at exit: 0 bytes in 0 blocks
==6911==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==6911== 
==6911== All heap blocks were freed -- no leaks are possible
==6911== 
==6911== For counts of detected and suppressed errors, rerun with: -v
==6911== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **yutaroi2** using **0537b9d52ecad714c9055a2a61e4f379fcf9acf6** (from **February 19th 2019, 12:05:00 am**)
