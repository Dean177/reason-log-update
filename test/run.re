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