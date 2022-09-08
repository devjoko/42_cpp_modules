/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:15:05 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/08 21:27:24 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>

/* ************************************************************************** */
/*                                  Span Class                                */
/* ************************************************************************** */

class Span
{
private:
	unsigned int _size;
	unsigned int _count;
	std::vector<int> _stack;

	Span();
public:
	Span(unsigned int N);
	// Span(const Span& rhs);
	~Span();

	// Span& operator=(const Span& rhs);

	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);
};

// std::ostream& operator<<(const std::ostream& out, const Span& obj);

#endif /* SPAN_H */
