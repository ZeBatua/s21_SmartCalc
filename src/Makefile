# ASAN := -fsanitize=address
# CFLAGS := -std=c11 $(ASAN) -pedantic
# CPPFLAGS := -Wall -Werror -Wextra
CC = gcc -g
GFLAGS = -coverage
LDLIBS = -lgcov
TFLAGS = -lcheck
ARFLAGS := rcs
OBJECTS = *.o
SOURCES := Smart_Calc_QT/calculator/read_string.c \
Smart_Calc_QT/calculator/valid_string.c \
Smart_Calc_QT/calculator/add_x_value_in_string.c \
Smart_Calc_QT/calculator/calc_string.c \
Smart_Calc_QT/credit/credit_annuity_calc.c \
Smart_Calc_QT/credit/credit_diff_calc.c \
Smart_Calc_QT/deposit/is_norm_dep_values.c \
Smart_Calc_QT/deposit/dep_calc.c

VAR = $(shell pkg-config --cflags --libs check)

all: clean s21_calc.a

s21_calc.a: clean
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(SOURCES) $(ASAN) -c
	@ar rcs s21_calc.a $(OBJECTS)
	@rm *.o
# nm s21_calc.a | grep "\.o"

test: s21_calc.a
	@$(CC) $(ASAN) s21_calc.a Smart_Calc_QT/tests/calc_test.c $(CFLAGS) $(TFLAGS) $(VAR) -o $@
	@./$@
	@$(CC) $(ASAN) s21_calc.a Smart_Calc_QT/tests/credit_calc.c $(CFLAGS) $(TFLAGS) $(VAR) -o $@
	@./$@

stile_test: s21_calc.a
	$(CC) $(ASAN) s21_calc.a  Smart_Calc_QT/stile_test.c $(CFLAGS) $(TFLAGS) $(VAR) -o $@
	./$@

main: s21_calc.a
	gcc $(ASAN) -g s21_calc.a calc.c -o $@
	@./$@

gcov_report: test
	gcovr .
	gcovr --html-details -o report.html
	open ./report.html

check: 
	cppcheck *.c 
	cppcheck ./Smart_Calc_QT/*.c
# clang-format -i -n functions/*.c # чекай сурсы
# clang-format -i -n *.h
# clang-format -i -n tests.c

leaks:
	CK_FORK=no leaks --atExit -- ./test

clean:
	@rm -rf s21_calc.a test *.html *.gcda *.gcno gcov_report *.info report *.o *.dSYM *.css

install:
	cd build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug && cmake .
	cd build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug && make
	cd build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Smart_Calc_QT.app/Contents/MacOS && ./Smart_Calc_QT

uninstall:
	cd build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug && make clean
	rm -rf build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeCache.txt build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Calculator.app

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
