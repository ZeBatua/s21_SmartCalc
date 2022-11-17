# ASAN := -fsanitize=address
# CFLAGS := -std=c11 $(ASAN) -pedantic
# CPPFLAGS := -Wall -Werror -Wextra
CC = gcc -g
GFLAGS = -coverage
LDLIBS = -lgcov
TFLAGS = -lcheck
ARFLAGS := rcs
OBJECTS = *.o
SOURCES := ./calculator_functions/*/*.c
# VAR = $(shell pkg-config --cflags --libs check)

all: clean s21_calc.a

s21_calc.a: clean
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(SOURCES) $(ASAN) -c
	@ar rcs s21_calc.a $(OBJECTS)
	@rm *.o
# nm s21_calc.a | grep "\.o"

test: s21_calc.a
	$(CC) s21_calc.a test.c $(CFLAGS) $(TFLAGS) $(VAR) -o $@
	./$@

main: s21_calc.a
	gcc -g s21_calc.a calc.c -o $@
	@./$@

gcov_report: clean
	$(CC) $(SOURCES) $(VAR) $(ASAN) $(CFLAGS) $(LDLIBS) $(GFLAGS) -c
	ar rcs s21_calc.a $(OBJECTS)
	ranlib s21_calc.a
	$(CC) $(ASAN) $(LDLIBS) $(VAR) tests.c s21_calc.a -o test $(TFLAGS)
	./test
	gcovr .
	gcovr --html-details -o report.html
	open ./report.html

check:
	cppcheck functions/*.c
	cppcheck tests.c
	clang-format -i -n functions/*.c
	clang-format -i -n *.h
	clang-format -i -n tests.c
	CK_FORK=no leaks --atExit -- ./test

clean:
	@rm -rf s21_calc.a test *.html *.gcda *.gcno gcov_report *.info report *.o *.dSYM *.css

