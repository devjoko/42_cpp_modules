/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:45:06 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/27 03:42:24 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** STACK is a "container adaptor" and is constructed by taking the sequential container DEQUE
** and "adapting" (restricting/modifying) its interface to provide the desired behaviour.
** It adapts the deque container to provide strict last-in, first-out (LIFO) behaviour.
*/

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

# include <iostream>
# include <stack>

#define	RED			"\033[1;31m"
#define	GREEN		"\033[1;32m"
#define YELLOW		"\033[1;33m"
#define BLUE		"\033[1;36m"
#define	END			"\033[0m"

template<typename T>
class MutantStack : public std::stack<T>
{
public:

	/* MEMBER TYPES */
	typedef typename std::stack<T>::container_type::iterator iterator;

//	STACK has access to the underlying container_type c, which is DEQUE
//	protected:
//	container_type c

public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack& rhs) : std::stack<T>(rhs) {}
	~MutantStack() {}

	MutantStack& operator=(const MutantStack& rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return (*this);
	}

	iterator begin(void) { return ( std::stack<T>::c.begin() ); }
	iterator end(void) { return ( std::stack<T>::c.end() ); }
};

#endif /* MUTANT_STACK_H */
