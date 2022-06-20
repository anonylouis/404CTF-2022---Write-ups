/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 00:45:41 by bledda            #+#    #+#             */
/*   Updated: 2021/10/31 12:56:03 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <dirent.h>
#include <vector>
#include <sys/types.h>
#include <cstring>

using namespace std;

static void	convertFolder(const char *folder, const char *res)
{
	DIR				*dr;
	struct dirent	*en;
	string			tmp;
	string			xpm;
	string			command;
	string			ch;
	string			resolution;

	ch = folder;
	if (folder[strlen(folder) - 1] != '/')
		ch += "/";
	resolution = res;
	dr = opendir(folder);
	if (dr)
	{
		while ((en = readdir(dr)) != NULL)
		{
			tmp = en->d_name;
			xpm = tmp;
			if (tmp.size() > 3)
			{
				xpm.replace(xpm.find("."), 4, ".xpm");
				cout << tmp << " >> " << xpm << endl;
				command = "convert "+ch+tmp+" -geometry "+resolution+" -colors 216 "+ch+xpm;
				system(command.c_str());
			}
		}
		closedir(dr);
	}
}

static void	convertFile(const char *file, const char *res)
{
	string			tmp;
	string			xpm;
	string			command;
	string			resolution;

	xpm = tmp = file;
	resolution = res;
	xpm.replace(xpm.rfind("."), 4, ".xpm");
	cout << tmp << " >> " << xpm << endl;
	command = "convert "+tmp+" -geometry "+resolution+" -colors 216 "+xpm;
	system(command.c_str());
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		cerr << "<Folder or files> <1280x720> [Flags FILE or FOLDER]" << endl;
		return (1);
	}
	if (!strcmp(av[3], "FILE"))
		convertFile(av[1], av[2]);
	else if (!strcmp(av[3], "FOLDER"))
		convertFolder(av[1], av[2]);
	return(0);
}
