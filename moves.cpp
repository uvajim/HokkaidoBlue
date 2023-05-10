//
// Created by Jinming Liang on 4/25/23.
//
#include "bitboard.cpp"

uint64_t pop_LSB(uint64_t &num){
    uint64_t LSB = 0x1;
    while (!(num & 1)){
        LSB = LSB << 1;
        num = num >> 1;
    }
    return LSB;
}

uint64_t pop_MSB(uint64_t num){
    uint64_t MSB = 0x1;
    while (num){
        MSB = MSB << 1;
        num = num >> 1;
    }
    return MSB;
}

uint64_t generate_white_pawn_moves(uint64_t pawns){
    while (pawns){
        uint64_t curr_pawn = pop_LSB(pawns);
        uint64_t possible_move = 0x0;
        if (curr_pawn & Rank[1]){
            possible_move = curr_pawn << 16;
        }
        possible_move |= curr_pawn << 8;
        if (curr_pawn << 7 & black_pieces){
            possible_move |= curr_pawn << 7;
        }
        if (curr_pawn << 9 & black_pieces){
            possible_move |= curr_pawn << 9;
        }
    }
};
uint64_t generate_white_bishop_moves(uint64_t bishops);
uint64_t generate_white_rook_moves(uint64_t rooks);
uint64_t generate_white_knight_moves(uint64_t knights);
uint64_t generate_white_queen_moves(uint64_t queen);
uint64_t generate_white_king_moves(uint64_t king);


uint64_t generate_black_pawn_moves(uint64_t pawns){
    while (pawns){
        uint64_t curr_pawn = pop_LSB(pawns);
        uint64_t  possible_move = 0x0;
        if (curr_pawn & Rank[6]){
            possible_move = curr_pawn >> 16;
        }
        possible_move |= curr_pawn >> 8;
        if (curr_pawn >> 7 & black_pieces){
            possible_move |= curr_pawn >> 7;
        }
        if (curr_pawn >> 9 & black_pieces){
            possible_move |= curr_pawn >> 9;
        }
    }
};
uint64_t generate_black_bishop_moves(uint64_t bishops);
uint64_t generate_black_rook_moves(uint64_t rooks);
uint64_t generate_black_knight_moves(uint64_t knights);
uint64_t generate_black_queen_moves(uint64_t queen);
uint64_t generate_black_king_moves(uint64_t king);