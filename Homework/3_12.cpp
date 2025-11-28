#include <stdio.h>

int main()
{
    int N_CALCULATIONS ;
    int i ;
    
    int attackerLevel ;
    int opponentLevel ;
    int opponentArmor ;

    float baseAttack ;
    float damageReduction ;
    float netDamage ;
    float deficit ;

    printf( "Enter number of calculations : " ) ;
    if ( scanf( "%d", &N_CALCULATIONS ) != 1 ) return 1 ;

    for ( i = 0 ; i < N_CALCULATIONS ; i++ ) {
        
        printf( "\n--- Round %d ---\n", i + 1 ) ;
        printf( "Enter Attacker Level, Opponent Level, Opponent Armor : " ) ;
        
        scanf( "%d %d %d", &attackerLevel, &opponentLevel, &opponentArmor ) ;

        baseAttack = attackerLevel * 10.0 ;

        if ( opponentArmor < 50 ) {
            damageReduction = 0.20 ;
        } else {
            damageReduction = 0.40 ;
        }

        netDamage = baseAttack * ( 1.0 - damageReduction ) ;

        if ( netDamage >= 150.0 ) {
            printf( "SUCCESS! Net Damage: %.2f\n", netDamage ) ;
        } else {
            deficit = 150.0 - netDamage ;
            printf( "FAIL. Deficit: %.2f\n", deficit ) ;
        }
    }

    return 0 ;
}
