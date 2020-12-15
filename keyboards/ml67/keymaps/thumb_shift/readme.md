# ML67 Thumb Shift

A implementation of the Japanese thumb shift input specification using the MINILA US layout. Since it maps onto Romaji input, some symbols in the specification cannot be inputted, and are hence disabled.

This implementation is designed to work with all OSes, so OS-specific keys (or key combinations) are not used. For single keystrokes of the thumb shift keys, space is used in place of the right thumb shift henkan (変換), and enter is outputted in place of the left thumb shift muhenkan (無変換).

## Configurations

Items configurable in `config.h`:

- Combo time limit

    ```C
    #define COMBO_TERM 100
    ```

    The time allowed before a thumb shift combo would fail. Defaults to 100 ms if not defined.

- Combo overlap duration

    ```C
    #define OVERLAP_TERM (2 * DEBOUNCE)
    ```

    The minimum time difference between two thumb shift combos. If two thumb combos are closer than this duration, the first thumb shift combo will be treated as a single keystroke. Defaults to twice of the debounce delay if not defined.

- Thumb shift hold

    ```C
    #define THUMB_HOLD
    ```

    A flag that enables multiple combos in one long hold of a thumb shift. For example, when this feature is enabled, you can type "まるまる" without lifting the right thumb shift.
