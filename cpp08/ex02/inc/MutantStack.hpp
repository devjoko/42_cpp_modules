/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:45:06 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/09 19:12:58 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	typedef typename std::stack<T>::container_type::iterator it;
	MutantStack()
	{
		std::cout << "ctor" << std::endl;
	}
	MutantStack(const MutantStack& rhs)
	{
		*this = rhs;
	}
	~MutantStack()
	{
		std::cout << "dtor" << std::endl;
	}
	it begin(void)
	{
		return (this->c.begin());
	}

	it end(void)
	{
		return (this->c.end());
	}
};

#endif /* MUTANT_STACK_H */
