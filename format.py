import re

with open('minified_mandelbrot.c') as f:
    contents = f.read()

with open('template.txt') as f:
    format_data = f.read()

len_format = len(re.sub('[\n \t]', '', format_data))

if len(contents) < len_format - 5:
	contents += '/*' + '#' * (len_format - len(contents) - 4) + '*/'

idx = 0
for char in format_data:
    if char in '\n\t\r ':
        print(char, end='')
    else:
        print(contents[idx], end='')
        idx += 1
