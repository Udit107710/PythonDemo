s = input();
numbers = list(map(int, s.split()));
answers = [];

for x in range(0, len(numbers)):
	for y in range(x+1,len(numbers)):
		t = abs(numbers[x] - numbers[y]);
		p = min(numbers[x],numbers[y]);
		answers.append(t*p);


print(max(answers));
