for ((i=1;i<=10;i++))
do 
	python3 rand.py > $i.in
	./burt < $i.in > $i+brut.out
	./wzor < $i.in > $i+wzor.out
	diff -b $i+brut.out $i+wzor.out

done

