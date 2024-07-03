const std = @import("std");

pub fn build(b: *std.Build) void {
  const target = b.standardTargetOptions(.{});
  const optimize = b.standardOptimizeOption(.{});

  // const t = target.result;

  // libexpat
  const expat = b.addStaticLibrary(.{
    .name = "expat",
    .target = target,
    .optimize = optimize
  });
  // Link C standard library
  expat.linkLibC();

  // Include "expat/lib"
  expat.addIncludePath(b.path("expat/lib"));

  expat.addCSourceFiles(.{
    .files = &.{
      "expat/lib/xmlparse.c",
      "expat/lib/xmlrole.c",
      "expat/lib/xmltok_impl.c",
      "expat/lib/xmltok_ns.c",
      "expat/lib/xmltok.c"
    }
  });

  expat.installHeader(b.path("expat/lib/expat.h"), "expat.h");
  expat.installHeader(b.path("expat/lib/expat_external.h"), "expat_external.h");

  b.installArtifact(expat);
}
