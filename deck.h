#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - Card suits enum.
 * @SPADE: Suit spades
 * @HEART: Suits
 * @CLUB: Clu
 * @DIAMOND: Diamo
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing cards
 *
 * @value: Card value
 * "Ace" to "King"
 * @kind: Card kind
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Card decks
 *
 * @card: Pointer to card nodes
 * @prev: Pointer to prev node list
 * @next: Pointer to next node list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
