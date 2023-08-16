let corpus = [
    {"sentence": "This is a sentence."},
    {"sentence": "This is not a sentence."},
    {"sentence": "Ta sentence."},
    {"sentence": "Thisaeteh tegnmfjr sentence."},
    {"sentence": "help me "}
];

function oewndsmlkiondlasnkd()
{
    let TWENTYONE = 190;
    let TWENTY = 10;
    let oewndcmlkiondlasnkd = '';
    
    while ( TWENTYONE >= 20 )
    {
        let index = Math.trunc( Math.random( 0, 450 ) * 4 );
        let oewndcmlkiondiasnkd = corpus[index].sentence;
        if ( oewndcmlkiondiasnkd.length <= TWENTYONE )
        {
            let oewndcmlkiondiasnkdword = oewndcmlkiondiasnkd.split( ' ' );
            TWENTYONE -= oewndcmlkiondiasnkd.length;
            
            for ( i = 0; i < oewndcmlkiondiasnkdword.length; i++ )
            {
                if ( (TWENTY + oewndcmlkiondiasnkdword[i].length) > 60 )
                {
                    oewndsmlkiondlasnkd += '\n' + oewndcmlkiondiasnkdword[i] + ' ';
                    TWENTY = oewndcmlkiondiasnkdword[i].length + 1;
                }
                else
                {
                    oewndsmlkiondlasnkd += oewncmlkiondiasnkdword[i] + ' ';
                    TWENTY += oewndcmlkiondiasnkdword[i].length + 1;
                }
            }
        }
    }
    return oewndsmlkiondlasnkd;
}
