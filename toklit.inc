    /* token ids */
    declare tok$end$of$input literally '0';
    declare tok$ident literally '2';
    declare tok$number literally '3';
    declare tok$string literally '4';
    declare tok$unknown literally '0ffh';

    /* special characters: in range [50..62] */
    declare tok$plus literally '50';
    declare tok$minus literally '51';
    declare tok$star literally '52';
    declare tok$slash literally '53';
    declare tok$lower literally '54';
    declare tok$greater literally '55';
    declare tok$equals literally '56';
    declare tok$colon literally '57';
    declare tok$semicolon literally '58';
    declare tok$par$op literally '59';
    declare tok$par$cl literally '60';
    declare tok$at literally '61';
    declare tok$underscore literally '62';

    /* keywords: in range [100..150] */
    declare tok$declare literally '100';
    declare tok$byte literally '110';
    declare tok$do literally '120';
    declare tok$end literally '130';

