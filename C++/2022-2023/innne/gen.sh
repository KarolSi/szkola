for ((i=1;i<=100;i++))
do 
	python3 rand.py > test.in
	./burt < test.in > brut.out
	./wzor < test.in > wzor.out
	diff -b brut.out wzor.out

done

