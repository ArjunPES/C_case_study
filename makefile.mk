marks_report:
	gcc entry.c calc.c check.c main.c -o marks_report
clean:
	rm marks_report
	rm Student_Data.csv
