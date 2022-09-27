/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:15:05 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/27 01:36:30 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <cstdlib>
# include <ctime>
# include <climits>

#define	RED			"\033[1;31m"
#define	GREEN		"\033[1;32m"
#define YELLOW		"\033[1;33m"
#define BLUE		"\033[1;36m"
#define	END			"\033[0m"

/* ************************************************************************** */
/*                                  Span Class                                */
/* ************************************************************************** */

class Span
{
private:
	unsigned int _size;
	unsigned int _count;
	std::vector<int> _container;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& rhs);
	~Span();

	Span& operator=(const Span& rhs);

	void addNumber(int number);
	void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
	int shortestSpan(void);
	int longestSpan(void);

	const std::vector<int>& getContainer(void) const;
};

std::ostream& operator<<(std::ostream& out, const Span& obj);

#endif /* SPAN_H */
