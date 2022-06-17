def tour1(password):
    string = str("".join( "".join(password[::-1])[::-1])[::-1])
    return [ord(c) for c in string]

def detour1(new) :
	string = [chr(c) for c in new]
	return str("".join( "".join(string[::-1])[::-1])[::-1])

def tour2(password):
    new = []
    i = 0
    while password != []:
        new.append(password[password.index(password[i])])
        new.append(password[password.index(password[i])] + password[password.index(password[ i + 1 %len(password)])])
        password.pop(password.index(password[i]))
        i += int('qkdj', base=27) - int('QKDJ', base=31) + 267500
    return new

def detour2(new) :
	password = []
	while new != [] :
		password.append(new.pop(0))
		new.pop(0)
	return password

def tour3(password):
    mdp =['l', 'x', 'i', 'b', 'i', 'i', 'q', 'u', 'd', 'v', 'a', 'v', 'b', 'n', 'l', 'v', 'v', 'l', 'g', 'z', 'q', 'g', 'i', 'u', 'd', 'u', 'd', 'j', 'o', 'r', 'y', 'r', 'u', 'a']
    for i in range(len(password)):
        mdp[i], mdp[len(password) - i -1 ] = chr(password[len(password) - i -1 ] + i % 4),  chr(password[i] + i % 4)
    return "".join(mdp)


def detour3(mdp):
	password =['l', 'x', 'i', 'b', 'i', 'i', 'q', 'u', 'd', 'v', 'a', 'v', 'b', 'n', 'l', 'v', 'v', 'l', 'g', 'z', 'q', 'g', 'i', 'u', 'd', 'u', 'd', 'j', 'o', 'r', 'y', 'r', 'u', 'a']
	n=0
	while(mdp[n:] != "".join(password)[n:]) :
	 n+=1
	for i in range(n - 1, -1, -1) :
		password[i], password[n - 1 - i] = ord(mdp[n - 1 - i]) - (n - 1 -i) % 4 , ord(mdp[i]) - (n - 1 -i) % 4
	return password[:n]

rev = "¡P6¨sÉU1T0d¸VÊvçu©6RÈx¨4xFw5"
print(detour1(detour2(detour3(rev))))

# mdp = input("Mot de passe : ")
# if tour3(tour2(tour1(mdp))) == "¡P6¨sÉU1T0d¸VÊvçu©6RÈx¨4xFw5":
#     print("Bravo ! Le flag est 404CTF{" + mdp + "}")
# else :
#     print("Désolé, le mot-de-passe n'est pas correct")
