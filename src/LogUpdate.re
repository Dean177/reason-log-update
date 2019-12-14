module StdOut = {
  [@bs.module] external update: string => unit = "log-update";

  [@bs.module "log-update"] external clear: unit => unit = "clear";

  [@bs.module "log-update"] external done_: unit => unit = "done";
};

module StdErr = {
  [@bs.module "log-update"] external update: string => unit = "stderr";

  [@bs.module "log-update"] [@bs.scope "stderr"]
  external clear: unit => unit = "clear";

  [@bs.module "log-update"] [@bs.scope "stderr"]
  external done_: unit => unit = "done";
};

include StdOut;

[@bs.module "log-update"] external stderr: string => unit = "stderr";