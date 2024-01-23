#ifndef DECK_H
#define DECK_H

typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/*
 * Cards
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/*
 * Deck of card
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
#endif
