
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemm32' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemmSingle = {
  "Xgemm", Precision::kSingle, {"KWG", "KWI", "MDIMA", "MDIMC", "MWG", "NDIMB", "NDIMC", "NWG", "SA", "SB", "STRM", "STRN", "VWM", "VWN"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { Name{"AMD Radeon RX 480                                 "}, Params{ 32, 2, 8, 8, 16, 16, 16, 64, 1, 1, 0, 0, 1, 2 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 16, 16, 16, 64, 1, 1, 0, 0, 1, 2 } },
        } },
        { "Fiji", {
          { Name{"AMD Radeon R9 Fury X                              "}, Params{ 32, 2, 16, 16, 64, 16, 16, 64, 1, 1, 0, 0, 4, 4 } },
          { Name{"AMD Radeon R9 M370X Compute Engine                "}, Params{ 32, 2, 16, 16, 64, 8, 16, 128, 0, 0, 0, 0, 2, 8 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 2, 4 } },
        } },
        { "Hawaii", {
          { Name{"AMD Radeon R9 290X                                "}, Params{ 16, 2, 16, 32, 128, 32, 8, 64, 1, 1, 1, 1, 4, 2 } },
          { kDeviceNameDefault                                        , Params{ 16, 2, 16, 32, 128, 32, 8, 64, 1, 1, 1, 1, 4, 2 } },
        } },
        { "Oland", {
          { Name{"Oland                                             "}, Params{ 16, 2, 32, 16, 64, 32, 16, 128, 1, 1, 1, 0, 2, 4 } },
          { kDeviceNameDefault                                        , Params{ 16, 2, 32, 16, 64, 32, 16, 128, 1, 1, 1, 0, 2, 4 } },
        } },
        { "Pitcairn", {
          { Name{"AMD Radeon R9 270X                                "}, Params{ 16, 2, 16, 8, 32, 16, 16, 128, 0, 0, 1, 0, 1, 1 } },
          { kDeviceNameDefault                                        , Params{ 16, 2, 16, 8, 32, 16, 16, 128, 0, 0, 1, 0, 1, 1 } },
        } },
        { "Tahiti", {
          { Name{"AMD Radeon HD 7970                                "}, Params{ 32, 2, 16, 32, 128, 16, 8, 64, 0, 0, 0, 0, 4, 1 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 16, 32, 128, 16, 8, 64, 0, 0, 0, 0, 4, 1 } },
        } },
        { "Tonga", {
          { Name{"AMD Radeon R9 380                                 "}, Params{ 16, 2, 16, 32, 64, 16, 8, 128, 1, 1, 0, 0, 2, 8 } },
          { kDeviceNameDefault                                        , Params{ 16, 2, 16, 32, 64, 16, 8, 128, 1, 1, 0, 0, 2, 8 } },
        } },
        { "Turks", {
          { Name{"AMD Radeon HD 6770M                               "}, Params{ 32, 2, 8, 8, 64, 8, 8, 64, 0, 0, 0, 0, 4, 4 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 64, 8, 8, 64, 0, 0, 0, 0, 4, 4 } },
        } },
        { "Vancouver", {
          { Name{"ATI Radeon HD 6750M                               "}, Params{ 32, 2, 8, 16, 128, 8, 8, 128, 0, 0, 1, 1, 8, 8 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 16, 128, 8, 8, 128, 0, 0, 1, 1, 8, 8 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 4 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { Name{"Mali-T760                                         "}, Params{ 32, 2, 8, 8, 64, 8, 16, 16, 0, 1, 0, 0, 8, 1 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 64, 8, 16, 16, 0, 1, 0, 0, 8, 1 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { Name{"Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz         "}, Params{ 16, 2, 8, 8, 128, 16, 8, 128, 0, 1, 1, 1, 1, 8 } },
          { Name{"Intel(R) Core(TM) i5-4570 CPU @ 3.20GHz           "}, Params{ 32, 2, 32, 16, 64, 32, 8, 64, 0, 1, 1, 0, 1, 1 } },
          { Name{"Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz          "}, Params{ 32, 8, 32, 32, 64, 32, 16, 64, 1, 1, 1, 0, 2, 2 } },
          { Name{"Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz   "}, Params{ 32, 2, 16, 8, 128, 16, 8, 64, 0, 0, 1, 0, 1, 2 } },
          { Name{"Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz           "}, Params{ 32, 2, 32, 8, 128, 8, 8, 128, 1, 1, 1, 1, 2, 8 } },
          { Name{"Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz          "}, Params{ 16, 2, 8, 8, 128, 8, 8, 128, 1, 1, 1, 0, 1, 8 } },
          { Name{"Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz          "}, Params{ 32, 8, 16, 16, 64, 32, 32, 64, 0, 1, 1, 0, 1, 2 } },
          { Name{"Intel(R) Core(TM) i7-6770HQ CPU @ 2.60GHz         "}, Params{ 32, 2, 16, 32, 32, 8, 8, 64, 0, 1, 0, 0, 1, 8 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 32, 8, 8, 64, 0, 0, 0, 0, 4, 4 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { Name{"Intel(R) HD Graphics 530                          "}, Params{ 32, 2, 8, 8, 128, 32, 16, 64, 0, 0, 1, 0, 4, 2 } },
          { Name{"Intel(R) HD Graphics 5500 BroadWell U-Processor GT"}, Params{ 32, 8, 8, 8, 64, 32, 16, 64, 1, 1, 1, 1, 4, 2 } },
          { Name{"Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile "}, Params{ 16, 2, 16, 8, 32, 8, 16, 128, 1, 1, 1, 1, 2, 4 } },
          { Name{"Intel(R) HD Graphics IvyBridge M GT2              "}, Params{ 32, 2, 16, 16, 64, 16, 8, 64, 1, 1, 1, 0, 2, 4 } },
          { Name{"Intel(R) HD Graphics Skylake ULT GT2              "}, Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 4 } },
          { Name{"Iris                                              "}, Params{ 16, 8, 16, 8, 128, 32, 16, 64, 1, 1, 1, 1, 4, 1 } },
          { Name{"Iris Pro                                          "}, Params{ 16, 2, 16, 8, 64, 32, 32, 128, 1, 1, 1, 0, 4, 4 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 4 } },
        } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "default", {
          { Name{"Intel(R) Many Integrated Core Acceleration Card   "}, Params{ 32, 2, 32, 32, 32, 32, 8, 128, 0, 0, 1, 0, 1, 4 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 32, 32, 32, 32, 8, 128, 0, 0, 1, 0, 1, 4 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { Name{"GeForce GTX 480                                   "}, Params{ 16, 2, 16, 8, 64, 32, 16, 64, 1, 1, 1, 1, 2, 2 } },
          { Name{"GeForce GTX 580                                   "}, Params{ 16, 2, 32, 8, 128, 16, 32, 64, 1, 1, 1, 0, 4, 2 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 32, 32, 32, 64, 0, 0, 0, 0, 1, 2 } },
        } },
        { "SM3.0", {
          { Name{"GRID K520                                         "}, Params{ 16, 2, 16, 8, 32, 8, 16, 64, 1, 1, 1, 1, 2, 4 } },
          { Name{"GeForce GT 650M                                   "}, Params{ 32, 2, 8, 8, 32, 32, 32, 64, 1, 1, 0, 0, 4, 2 } },
          { Name{"GeForce GTX 670                                   "}, Params{ 16, 2, 8, 8, 64, 16, 16, 64, 1, 1, 1, 0, 2, 4 } },
          { Name{"GeForce GTX 680                                   "}, Params{ 32, 8, 8, 16, 64, 32, 16, 128, 1, 1, 0, 0, 4, 2 } },
          { Name{"GeForce GTX 760 Ti OEM                            "}, Params{ 32, 2, 8, 8, 32, 8, 8, 64, 0, 0, 0, 0, 2, 4 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 32, 32, 32, 64, 1, 1, 0, 0, 4, 2 } },
        } },
        { "SM3.5", {
          { Name{"GeForce GTX TITAN                                 "}, Params{ 16, 8, 32, 16, 64, 8, 8, 64, 1, 1, 1, 0, 2, 2 } },
          { Name{"GeForce GTX TITAN Black                           "}, Params{ 16, 2, 16, 8, 64, 16, 16, 64, 1, 1, 1, 0, 4, 1 } },
          { Name{"Tesla K20m                                        "}, Params{ 16, 2, 32, 16, 64, 16, 8, 64, 1, 1, 1, 0, 2, 4 } },
          { Name{"Tesla K40m                                        "}, Params{ 16, 8, 16, 8, 64, 16, 16, 128, 1, 1, 1, 0, 2, 4 } },
          { kDeviceNameDefault                                        , Params{ 16, 8, 32, 16, 64, 32, 16, 64, 1, 0, 1, 0, 2, 2 } },
        } },
        { "SM5.0", {
          { Name{"GeForce GTX 750                                   "}, Params{ 16, 2, 16, 16, 64, 32, 8, 128, 1, 1, 1, 1, 1, 2 } },
          { Name{"GeForce GTX 750 Ti                                "}, Params{ 16, 2, 16, 16, 128, 32, 8, 64, 1, 1, 0, 1, 8, 2 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 64, 32, 32, 64, 0, 0, 0, 0, 2, 1 } },
        } },
        { "SM5.2", {
          { Name{"GeForce GTX 980                                   "}, Params{ 16, 2, 16, 16, 64, 16, 8, 128, 1, 1, 1, 0, 4, 8 } },
          { Name{"GeForce GTX TITAN X                               "}, Params{ 16, 2, 8, 16, 128, 8, 8, 128, 1, 1, 1, 1, 4, 8 } },
          { kDeviceNameDefault                                        , Params{ 16, 2, 8, 16, 64, 8, 8, 128, 1, 1, 1, 0, 4, 8 } },
        } },
        { "SM6.1", {
          { Name{"GeForce GTX 1070                                  "}, Params{ 16, 2, 32, 16, 128, 32, 8, 128, 1, 1, 1, 0, 4, 1 } },
          { Name{"GeForce GTX 1080                                  "}, Params{ 32, 2, 16, 8, 64, 8, 8, 64, 1, 1, 1, 1, 4, 8 } },
          { Name{"GeForce GTX 1080 Ti                               "}, Params{ 16, 2, 32, 16, 64, 16, 8, 128, 1, 1, 0, 1, 2, 8 } },
          { Name{"TITAN X (Pascal)                                  "}, Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 1 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 4 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 32, 32, 32, 64, 1, 1, 0, 0, 4, 2 } },
        } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "default", {
          { Name{"QUALCOMM Adreno(TM)                               "}, Params{ 32, 2, 8, 8, 32, 8, 8, 32, 1, 1, 0, 0, 4, 1 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 32, 8, 8, 32, 1, 1, 0, 0, 4, 1 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 32, 16, 16, 32, 1, 1, 0, 0, 4, 2 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
