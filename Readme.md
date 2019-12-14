# reason-log-update

> [bucklescript](https://bucklescript.github.io/en) bindings to [log-update](https://github.com/sindresorhus/log-update)

## Installation

`npm install reason-log-update log-update --save`

## Usage

```reason
let frames = [|"-", "\\", "|", "/"|];
let i = ref(0);

let interval =
  Js.Global.setInterval(
    () => {
      i := (i^ + 1) mod Array.length(frames);
      let frame = frames[i^];
      LogUpdate.update(
        {j|
        ♥♥
   $frame unicorns $frame
        ♥♥
|j},
      );
    },
    80,
  );

ignore(Js.Global.setTimeout(() => Js.Global.clearInterval(interval), 3000));
```


## API

See the [LogUpdate.re](./src/LogUpdate.re) and the [documentation](https://github.com/sindresorhus/log-update);
