// Bracket Balanc Sol
n = int(input())
for _ in range(n):
    breck_seq = input()
    li = []
    for breck in breck_seq:
        try:
            if li[-1] == '[' and breck == ']':
                del li[-1]
            elif li[-1] == '{' and breck == '}':
                del li[-1]
            elif li[-1] == '(' and breck == ')':
                del li[-1]
            elif breck == '[' or '{' or '(':
                li.append(breck)
        except IndexError:
            li.append(breck)
    if len(li) == 0:
        print('YES')
    else:
        print('NO')
