# ASAN := -g -fsanitize=address
CFLAGS := -std=c11 -pedantic
CPPFLAGS := -Wall -Werror -Wextra
CC = gcc
GFLAGS = --coverage
TFLAGS = -lcheck
ARFLAGS := rcs
OBJECTS = *.o
SOURCES := Smart_Calc_QT/calculator/read_string.c \
Smart_Calc_QT/calculator/valid_string.c \
Smart_Calc_QT/calculator/add_x_value_in_string.c \
Smart_Calc_QT/credit/credit_annuity_calc.c \
Smart_Calc_QT/credit/credit_diff_calc.c \
Smart_Calc_QT/deposit/is_norm_dep_values.c \
Smart_Calc_QT/deposit/dep_calc.c \

SOURCES_TEST := Smart_Calc_QT/tests/test_calc_test.c

# VAR = $(shell pkg-config --cflags --libs check)

all: clean s21_calc.a

s21_calc.a: clean
	@$(CC) $(CPPFLAGS) $(SOURCES) $(ASAN) -c
	@ar rcs s21_calc.a $(OBJECTS)
	@rm *.o

test: s21_calc.a
	@$(CC) $(CPPFLAGS) $(ASAN) $(GFLAGS) s21_calc.a $(SOURCES_TEST) $(TFLAGS) $(VAR) -o $@
	@./$@

main: s21_calc.a
	@gcc $(ASAN) Smart_Calc_QT/main.c $(SOURCES) -g -o main 
	@./main

gcov_report: clean
	@$(CC) $(CPPFLAGS) $(SOURCES) $(GFLAGS) $(ASAN) -c
	@ar rcs s21_calc.a $(OBJECTS)
	@rm *.o
	@$(CC) $(CPPFLAGS) $(ASAN) $(GFLAGS) s21_calc.a $(SOURCES_TEST) $(TFLAGS) $(VAR) -o test
	@./test
	gcovr -r . --html --html-details -o report.html
	./test
	open report.html

check: 
	cppcheck $(SOURCES) $(SOURCES_TEST)
	cppcheck Smart_Calc_QT/*.h
	clang-format -i $(SOURCES) $(SOURCES_TEST)
	clang-format -i Smart_Calc_QT/*.h

leaks:
	CK_FORK=no leaks --atExit -- ./test

clean:
	rm -rf s21_calc.a test *.html *.gcda *.gcno gcov_report *.info report *.o *.dSYM *.css

install:
	cd Smart_Calc_QT && cmake .
	cd Smart_Calc_QT && make
	cd Smart_Calc_QT/Smart_Calc_QT.app/Contents/MacOS && ./Smart_Calc_QT

uninstall:
	cd Smart_Calc_QT && make clean
	rm -rf Smart_Calc_QT/CMakeCache.txt Smart_Calc_QT/Calculator.app

dist:
	cd .. && tar -czf s21_SmartCalc_v1.0.tgz src

dvi: dvi_clean
	makeinfo manual.texi --html
	open ./manual/index.html

dvi_clean:
	rm -rf manual

clean_cash:
	sh cleaner.sh
	sh cleaner_2.sh
